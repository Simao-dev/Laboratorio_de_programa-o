#include <stdio.h>

int main() {
    
    int p, q, r;

    scanf("%d %d %d", &p, &q, &r);
    
    // item a
    // (p -> (q -> r)) -> ((p v r) -> (q v r))
    // (p -> (~q v r)) -> (~(p v r) v (q v r)) - Lei da Implicacao
    // (~p v (~q v r)) -> (~(p v r) v (q v r)) - Lei da Implicacao
    // ~(~p v ~q v r) v (~(p v r) v q v r) - Lei da Implicacao
    // (p ^ q ^ ~r) v (~(p v r) v q v r) - De Morgan e Dupla Negacao
    int result_a = (p && q && !r) || (!(p || r) || q || r);
    if (result_a == 1) {
        printf("Item a: verdadeiro\n");
    } else {
        printf("Item a: falso\n");
    }
    
    // item b
    // (p ^ q) -> (p -> ~q)
    // (p ^ q) -> (~p v ~q) - Lei da Implicacao
    // ~(p ^ q) v (~p v ~q) - Lei da Implicacao
    // (~p v ~q) v (~p v ~q) - Lei de De Morgan
    int result_b = (!p || !q) || (!p || !q);
    if (result_b == 1) {
        printf("Item b: verdadeiro\n");
    } else {
        printf("Item b: falso\n");
    }
    
    // item c
    // (p -> q) -> ((p ^ r) -> (q -> r))
    // (p -> q) -> ((p ^ r) -> (~q v r)) - Lei da Implicacao
    // (p -> q) -> (~(p ^ r) v ~q v r) - Lei da Implicacao
    // (~p v q) -> (~(p ^ r) v ~q v r) - Lei da Implicacao
    // ~(~p v q) v (~(p ^ r) v ~q v r) - Lei da Implicacao
    // (~~p ^ ~q) v (~p v ~r v ~q v r) - Lei de De Morgan
    // (p ^ ~q) v (~p v ~r v ~q v r) - Lei da Dupla Negacao
    int result_c = (p && !q) || (!p || !r || !q || r);
    if (result_c == 1) {
        printf("Item c: verdadeiro\n");
    } else {
        printf("Item c: falso\n");
    }
    
    // item d
    // (p -> q) -> (p -> (q v r))
    // (p -> q) -> (~p v (q v r)) - Lei da Implicacao
    // (~p v q) -> (~p v q v r) - Lei da Implicacao
    // ~(~p v q) v (~p v q v r) - Lei da Implicacao
    // (~~p ^ ~q) v (~p v q v r) - Lei de De Morgan
    // (p ^ ~q) v (~p v q v r) - Lei da Dupla Negacao
    int result_d = (p && !q) || (!p || q || r);
    if (result_d == 1) {
        printf("Item d: verdadeiro\n");
    } else {
        printf("Item d: falso\n");
    }

    // item e
    // ((p -> ~q) ^ (~r v q) ^ r) -> ~p
    // ((~p v ~q) ^ (~r v q) ^ r) -> ~p - Lei da Implicacao
    // ~((~p v ~q) ^ (~r v q) ^ r) v ~p - Lei da Implicacao
    // ~(~p v ~q) v ~(~r v q) v ~r v ~p - Lei de De Morgan
    // (~~p ^ ~~q) v (~~r ^ ~q) v ~r v ~p - Lei de De Morgan
    // (p ^ q) v (r ^ ~q) v ~r v ~p - Lei da Dupla Negacao
    int result_e = (p && q) || (r && !q) || !r || !p;
    if (result_e == 1) {
        printf("Item e: verdadeiro\n");
    } else {
        printf("Item e: falso\n");
    }
    
    // item f
    // (p ^ q) -> (p v q)
    // ~(p ^ q) v (p v q) - Lei da Implicacao
    // (~p v ~q) v (p v q) - Lei de De Morgan
    int result_f = (!p || !q) || (p || q);
    if (result_f == 1) {
        printf("Item f: verdadeiro\n");
    } else {
        printf("Item f: falso\n");
    }
    
    // item g
    // (p v q) -> (~(p ^ r)) 
    // ~(p v q) v (~(p ^ r)) - Lei da Implicacao
    // (~p ^ ~q) v (~(p ^ r)) - Lei de De Morgan
    // (~p ^ ~q) v (~p v ~r)  - Lei de De Morgan
    int result_g = (!p && !q) || (!p || !r);
    if (result_g == 1) {
        printf("Item g: verdadeiro\n");
    } else {
        printf("Item g: falso\n");
    }
    
    // item h
    // (~q v p) -> (q -> p) 
    // (~q v p) -> (~q v p)  - Lei da Implicacao
    // ~(~q v p) v (~q v p)  - Lei da Implicacao
    // (~~q ^ ~p) v (~q v p)  - Lei de De Morgan
    // (q ^ ~p) v (~q v p) - Lei da Dupla Negacao
    int result_h = (q && !p) || (!q || p);
    if (result_h == 1) {
        printf("Item h: verdadeiro\n");
    } else {
        printf("Item h: falso\n");
    }
    
    // item i
    // ((~q v p) -> q) -> p
    // (~(~q v p) v q) -> p - Lei da Implicacao
    // ~(~(~q v p) v q) v p  - Lei da Implicacao
    // (~~(~q v p) ^ ~q) v p  - Lei de De Morgan
    // ((~q v p) ^ ~q) v p - Lei da Dupla Negacao
    int result_i = ((!q || p) && !q) || p;
    if (result_i == 1) {
        printf("Item i: verdadeiro\n");
    } else {
        printf("Item i: falso\n");
    }
    
    return 0;
}