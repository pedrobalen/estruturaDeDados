float calcularMedia(int vetor[], int n){
  float media = 0;
    for(int i = 0; i < n; i++){
      media = media + vetor[i];
  }
  return media/n;
};


