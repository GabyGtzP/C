#include<stdio.h>
#include<stdlib.h>
#include"\ElemStr.h"
#include"\List.h"

int NumElemsLista(Lista);
int NumElemsLista2(Lista);
int NumElemsLista3(Lista);
void ImpLista(Lista);
Lista PegaListas(Lista,Lista);
Lista Inviertelista(Lista);
int SonIguales(Lista,Lista);
int EsPalindroma(Lista);
Lista Insord(Elem, Lista);
Lista OrdenaLista(Lista);
int EstaEn(Elem,Lista);
int Ocurrencias(Elem, Lista);
Lista SubLista(Elem, Lista);
Lista SubLista2(Elem,Elem,Lista);

int main(){
   Lista l=vacia();
   Lista r=vacia();
   Elem e;

   printf("Tecle palabras, <enter> para terminas.\n");
   while(SonDiferentesElem(e=LeeElem(),"#"))
         l=cons(e,l);

   while(SonDiferentesElem(e=LeeElem(),"$"))
         r=cons(e,r);

   ImpLista(l);
   printf("Num elems %d.\n",NumElemsLista(PegaListas(r,l)));
   ImpLista(OrdenaLista(Inviertelista(PegaListas(l,r))));

/*
   esvacia(l)?printf("Si\n"):printf("No\n");
   esvacia(vacia())?printf("Si\n"):printf("No\n");
   ImpElem(cabeza(l));
   ImpElem(cabeza(resto(l)));
   printf("%d\n",NumElemsLista(l));
   l=cons(0,l);
   printf("%d\n",NumElemsLista(l));
   printf("%d\n",NumElemsLista2(l));
   printf("%d\n",NumElemsLista3(l));
   puts("----------------");
   ImpLista(PegaListas(l,r));
   puts("----------------");
   ImpLista(Inviertelista(PegaListas(l,r)));
   SonIguales(l,l)?puts("Si.\n"):puts("No.\n");
   EsPalindroma(r)?puts("Si.\n"):puts("No.\n");
   puts("\n--------------");
   ImpLista(OrdenaLista(Inviertelista(PegaListas(r,l))));

   EstaEn(5,l)?puts("Si."):puts("No.");
   printf("Ocurrencias de ");
   ImpElem(2);printf("= %d.\n",Ocurrencias(2,r));
   ImpLista(SubLista(30,r));
   ImpLista(SubLista2(20,24,r));

 */
   return 0;

}

int NumElemsLista(Lista l){
      if(esvacia(l))
         return 0;
      else
         return 1+NumElemsLista(resto(l));
};

int NumElemsLista2(Lista l){
      int n=0;
      while(!esvacia(l)){
             n++;
             l=resto(l);
      }
      return n;
};

int NumElemsLista3(Lista l){
      int n=0;
      for(;!esvacia(l);n++)
           l=resto(l);

      return n;
};

void ImpLista(Lista l){
     if(!esvacia(l)){
          ImpElem(cabeza(l));
          ImpLista(resto(l));
     }
};

Lista PegaListas(Lista l1, Lista l2){
     if(esvacia(l1))
        return l2;
     else
        return    cons(cabeza(l1),PegaListas(resto(l1),l2));
};

Lista Inviertelista(Lista l){
       if(esvacia(l))
           return l;
       else
           return PegaListas(Inviertelista(resto(l)),cons(cabeza(l),vacia()));
};

int SonIguales(Lista a, Lista b){
       if(esvacia(a)&&(esvacia(b)))
           return 1;
       else if(esvacia(a))
               return 0;
            else if(esvacia(b))
                    return 0;
                 else if(EsIgual(cabeza(a),cabeza(b)))
                         return SonIguales(resto(a),resto(b));
                      return 0;
};

int EsPalindroma(Lista l){return SonIguales(l,Inviertelista(l));};
Lista Insord(Elem e, Lista l){
     if(esvacia(l))
         return cons(e,l);
     else if(EsMenor(e,cabeza(l)))
             return cons(e,l);
          else
             return cons(cabeza(l),Insord(e,resto(l)));
};

Lista OrdenaLista(Lista l){
    if(esvacia(l))
         return l;
    else
         return Insord(cabeza(l),OrdenaLista(resto(l)));
};

int EstaEn(Elem e, Lista l){
      if(esvacia(l))
         return 0;
      else if(SonIgualesElem(e,cabeza(l)))
               return 1;
           else
               return EstaEn(e,resto(l));
}

int Ocurrencias(Elem e, Lista l){
      if(esvacia(l))
         return 0;
      else if(SonIgualesElem(e,cabeza(l)))
                return 1+Ocurrencias(e,resto(l));
           else
                return Ocurrencias(e,resto(l));
};

Lista SubLista(Elem e, Lista l){
         if(esvacia(l))
              return l;
         else if(SonIgualesElem(e,cabeza(l)))
                 return resto(l);
              else
                 return SubLista(e,resto(l));
};

Lista SubLista2(Elem e1, Elem e2, Lista l){
          if(esvacia(l))
             return l;
          else if(SonIgualesElem(e1,cabeza(l)))
                    return SubLista3(e2,resto(l));
               else
                    return SubLista2(e1,e2, resto(l));
};

Lista SubLista3(Elem e, Lista l){
     if(esvacia(l))
         return l;
     else if(SonDiferentesElem(e,cabeza(l)))
                return cons(cabeza(l),SubLista3(e,resto(l)));
          else
                return vacia();
}
