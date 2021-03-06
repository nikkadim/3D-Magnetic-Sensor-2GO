#include <MagneticSensor3D.h>


void setup() {
  Serial.begin(9600);
  while(!Serial);
  magnetic3dSensor.begin();
  magnetic3dSensor.setAccessMode(magnetic3dSensor.MASTERCONTROLLEDMODE);
  magnetic3dSensor.disableTemp();
}

void loop() {
  delay(magnetic3dSensor.getMeasurementDelay());
  magnetic3dSensor.updateData();

  Serial.print(magnetic3dSensor.getX());
  Serial.print(" ; ");
  Serial.print(magnetic3dSensor.getY());
  Serial.print(" ; ");
  Serial.println(magnetic3dSensor.getZ());
}
