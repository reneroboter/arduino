#define led_built_in_ESP 2 
#define led_built_in_Node 16 

void setup() {
  pinMode(led_built_in_ESP, OUTPUT);
  pinMode(led_built_in_Node, OUTPUT);
}
void loop() {
  digitalWrite(led_built_in_ESP,  HIGH);
  digitalWrite(led_built_in_Node, LOW);
  delay(1000);
  digitalWrite(led_built_in_ESP,  LOW);
  digitalWrite(led_built_in_Node, HIGH);
  delay(1000);
}