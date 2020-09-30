
#define row_1 3
#define row_2 4
#define row_3 5
#define row_4 6

#define col_1 7
#define col_2 8
#define col_3 9
#define col_4 10
void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);

  pinMode(row_1, INPUT_PULLUP);
  pinMode(row_2, INPUT_PULLUP);
  pinMode(row_3, INPUT_PULLUP);
  pinMode(row_4, INPUT_PULLUP);

  pinMode(col_1, INPUT);
  pinMode(col_2, INPUT);
  pinMode(col_3, INPUT);
  pinMode(col_4, INPUT);
 
}

int check_a_col(int a_column_to_check)
{
  int result = 0;
  pinMode(a_column_to_check, OUTPUT);
  digitalWrite(a_column_to_check, LOW);
  if(!digitalRead(row_1))
  {
    result = 0b0001;
  }
  if(!digitalRead(row_2))
  {
    result += 0b0010;
  }
  if(!digitalRead(row_3))
  {
    result += 0b0100;
  }
  if(!digitalRead(row_4))
  {
    result += 0b1000;
  }
  pinMode(a_column_to_check,INPUT);
  return result;
}

bool isPressed()
{
  int result = check_a_col(col_1);
  result += check_a_col(col_2);
  result += check_a_col(col_3);
  result += check_a_col(col_4);
  if(result > 0)
  {
    return true;
  }
  else
  {
    return false;
  }
}

#define NO_KEY -1
int keyValue()
{
  
                     // 0 1 2 3 4 5 6 7 8  9 A B C D E F
  int Col_1_Table[16] = { NO_KEY,1,4,1,7,1,4,1,14,1,4,1,7,1,4,1 };
  int Col_2_Table[16] = { NO_KEY,2,5,2,8,2,5,2,0,2,5,2,8,2,5,2 };
  int Col_3_Table[16] = { NO_KEY,3,6,3,9,3,6,3,15,2,6,3,9,3,6,3 };
  int Col_4_Table[16] = { NO_KEY,10,11,10,12,10,12,11,12,1,4,1,7,1,4,1 };

  while(!isPressed());

  int raw = check_a_col(col_1);
  Serial.print("raw 1 = " + String(raw) + " ");
  int keys = Col_1_Table[raw];
  if(keys!=NO_KEY) return keys;
  raw = check_a_col(col_2);
  Serial.print("raw 2 = " + String(raw) + " ");
  keys = Col_2_Table[raw];
  if(keys!=NO_KEY) return keys;
  raw = check_a_col(col_3);
  Serial.print("raw 3 = " + String(raw) + " ");
  keys = Col_3_Table[raw];
  if(keys!=NO_KEY) return keys;
  raw = check_a_col(col_4);
  Serial.print("raw 4 = " + String(raw) + " ");
  keys = Col_4_Table[raw];
  return keys; 
}

void loop() {
  // put your main code here, to run repeatedly:
  
  delay(950);
  
  int result1 = keyValue();

  Serial.print(result1);
  Serial.print("\r\n");
  

}
