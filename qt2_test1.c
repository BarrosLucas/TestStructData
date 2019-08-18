/*
2) 
a)
A quantidade de elementos por bucket ideal, neste caso, � m/n, uma vez que se tenta deixar
a quantiade de colis�es o mais equilibrada poss�vel entre todos os buckets, sendo melhor,
desta forma, distribuir igualmente todos os elementos em todos os buckets.

b)
Depende das chaves. Se as chaves dos elementos forem m�ltiplos de 13, por exemplo, ent�o
todos os elementos ser�o jogados no mesmo bucket. Para contornar isso, as chaves geradas
dever�o ser os mais aleat�rias poss�veis. Por exemplo:
Assumindo o seguinte conjunto de chaves: {0,13,26,39}
Como a fun��o de hash � chave % 13, ent�o todos os elementos seriam colocados no bucket 0.
Por�m, assumindo o seguinte conjunto de chaves: {13,14,15,16,17,18,19,20,21,22,23,24,25}
Assumindo a mesma fun��o de hack, seria colocado um elemento por bucket.
A conclus�o a que se chega � que a fun��o de hash deve ser definida a partir do conjunto
de chaves que deseja distribuir entre os buckets e entre a pr�pria quantidade de buckets.
*/
