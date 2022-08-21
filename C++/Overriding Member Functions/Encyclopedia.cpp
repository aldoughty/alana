#include "Encyclopedia.h"
#include <iostream>

// Define functions declared in Encyclopedia.h

   void Encyclopedia::SetEdition(string encEdition) {
      edition = encEdition;
   }
   
   string Encyclopedia::GetEdition() {
      return edition;
   }
   
   void Encyclopedia::SetNumVolumes(int encNumVolumes) {
      numVolumes = encNumVolumes;
   }
   
   int Encyclopedia::GetNumVolumes() {
      return numVolumes;
   }
   
   void Encyclopedia::PrintInfo() {
      Book::PrintInfo();
      cout << "   Edition: " << edition << endl;
      cout << "   Number of Volumes: " << numVolumes << endl;
   }
