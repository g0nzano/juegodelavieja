#include<iostream> 
#include<stdlib.h> 
using namespace std; 

int tablero[3][3]; 

void inicializar(); 
void dibujar(); 
char letra(int a); 
bool esGanador(); 

int main(){ 
int turno = 1; 
int f,c; 
inicializar(); 

do{ 
system("clear"); 
cout<<"Turno del jugador "<<turno<<endl; 
dibujar(); 

cout<<"Indique fila a jugar "; 
cin>>f; 
cout<<"Indique columna a jugar "; 
cin>>c; 

if(tablero[f][c] == 0){ 
        tablero[f][c] = turno; 

        if(turno == 1){ 
                turno = 2; 
        }else{ 
                turno = 1; 
        } 

} 
}while(esGanador() == false); 
cout<<"GANASTE!!!"<<endl; 
return 0; 

} 
bool esGanador(){ 
        int i; 
        if(tablero[0][0] == tablero[1][1] and tablero[1][1] == tablero[2][2] 
and tablero[1][1]!=0){ 
                return true; 
        } 

        if(tablero[0][2] == tablero[1][1] and tablero[1][1] == tablero[2][0] 
and tablero[1][1]!=0){ 
                return true; 
        } 

        for(i=0; i<3;i++){ 
                if(tablero[i][0] == tablero[i][1] and tablero[i][1] == tablero[i][2] 
and tablero[i][1]!=0){ 
                        return true; 
                } 
        } 

        for(i=0; i<3;i++){ 
                if(tablero[0][i] == tablero[1][i] and tablero[1][i] == tablero[2][i] 
and tablero[1][i]!=0){ 
                        return true; 
                } 
        } 

return false; 

} 
void inicializar(){ 
int i,j; 
for(i=0; i<3; i++){ 
        for(j=0;j<3;j++){ 
                tablero[i][j]=0; 
        } 
} 
} 
char letra(int a){ 
        if(a == 0){ 
                return ' '; 
        }else if(a == 1){ 
                return 'X'; 
        }else if(a == 2){ 
                return 'O'; 
        } 
} 
void dibujar(){ 
        cout<<"         |   |   "<<endl; 
        cout<<"       "<<letra(tablero[0][0])<<" | "<<letra(tablero[0][1])<<" | "<<letra(tablero[0][2])<<" "<<endl; 
        cout<<"         |   |   "<<endl; 
        cout<<"      ---+---+---"<<endl; 
        cout<<"         |   |   "<<endl; 
        cout<<"       "<<letra(tablero[1][0])<<" | "<<letra(tablero[1][1])<<" | "<<letra(tablero[1][2])<<" "<<endl; 
        cout<<"         |   |   "<<endl; 
        cout<<"      ---+---+---"<<endl; 
        cout<<"         |   |   "<<endl; 
        cout<<"       "<<letra(tablero[2][0])<<" | "<<letra(tablero[2][1])<<" | "<<letra(tablero[2][2])<<" "<<endl; 
        cout<<"         |   |   " <<endl;
		
		
	}