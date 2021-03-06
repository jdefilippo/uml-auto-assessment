/***********************************************/
/*                Betty Makovoz                */
/*  Multipe Determnitic Finite State Machines  */
/*                  FOREVER                    */
/***********************************************/

int L1_state=0;
int L2_state=0;
int L3_state=0;

# include <stdio.h>

void language1(char c);
void language2(char c);
void language3(char c);

int main (int argc, char* argv[]){
  char x;
  printf("Please Enter a string:\n");
  while (scanf("%c",&x) != EOF){
	  if( x == '0' || x == '1' ){
		  language1(x);
		  language2(x);
		  language3(x);
	  }
  }
  if (L1_state==3){
    printf("Language 1 Accepts \n");
  }
  else{
    printf("Language 1 Rejects \n");
  }
  if(L2_state==2){
    printf("Language 2 Accepts \n");
  }
  else {
    printf("Language 2 Rejects \n");
  }
  if (L3_state==1){
    printf("Language 3 Accepts \n");
  }
  else {
    printf("Language 3 Rejects \n");
  }
  return 0;
}

void  language1(char c){

  switch (L1_state){
  case 0:
    if (c=='0')
      L1_state=1;
    else 
      L1_state=0;
    break;
  case 1:
    if (c=='1')
      L1_state=2;
    else
      L1_state=1;
    break;
  case 2:
    if(c=='0')
      L1_state=3;
    else
      L1_state=0;
    break;
  case 3:
    if (c=='0' || c=='1')
      L1_state=3;
    break;
  }
  return;
}

void language2(char c){

  switch (L2_state){
  case 0:
    if (c=='0')
      L2_state=1;
    else 
      L2_state=2;
    break;
  case 1:
    if (c=='1')
      L2_state=3;
    else
      L2_state=0;
    break;
  case 2:
    if (c=='0')
      L2_state=3;
    else
      L2_state=0;
    break;
  case 3:
    if(c=='0')
      L2_state=2;
    else
      L2_state=1;
    break;
  default:
    break;
  }
  return;
}

void language3(char c){

  switch (L3_state){
  case 0:
    if(c=='0')
      L3_state=1;
    else 
      L3_state=3;
    break;
  case 1:
    if( c=='0' || c=='1' )
      L3_state=2;
    break;
  case 2:
  if (c=='0' || c=='1')
    L3_state=1;
  break;
  }
  return;
}
