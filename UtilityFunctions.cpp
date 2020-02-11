

int Utility::RemoveTwos(int original){
  bool done = false;
  int answer = 0;
  while (done != true){
    if (answer != 1 || answer != 0){
      answer = original / 2;
    }
    else{
      done = true;
      return answer;
    }
    }
  }
}