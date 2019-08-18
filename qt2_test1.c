/*
2) 
a)
A quantidade de elementos por bucket ideal, neste caso, é m/n, uma vez que se tenta deixar
a quantiade de colisões o mais equilibrada possível entre todos os buckets, sendo melhor,
desta forma, distribuir igualmente todos os elementos em todos os buckets.

b)
Depende das chaves. Se as chaves dos elementos forem múltiplos de 13, por exemplo, então
todos os elementos serão jogados no mesmo bucket. Para contornar isso, as chaves geradas
deverão ser os mais aleatórias possíveis. Por exemplo:
Assumindo o seguinte conjunto de chaves: {0,13,26,39}
Como a função de hash é chave % 13, então todos os elementos seriam colocados no bucket 0.
Porém, assumindo o seguinte conjunto de chaves: {13,14,15,16,17,18,19,20,21,22,23,24,25}
Assumindo a mesma função de hack, seria colocado um elemento por bucket.
A conclusão a que se chega é que a função de hash deve ser definida a partir do conjunto
de chaves que deseja distribuir entre os buckets e entre a própria quantidade de buckets.
*/
