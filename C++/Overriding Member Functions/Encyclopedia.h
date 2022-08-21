#ifndef ENCYCLOPEDIAH
#define ENCYCLOPEDIAH

#include "Book.h"

class Encyclopedia : public Book {
   public:   
      void SetEdition(string encEdition);
      string GetEdition();
      void SetNumVolumes(int encNumVolumes);
      int GetNumVolumes();
      void PrintInfo();

   private:
      string edition;
      int numVolumes;

};

#endif
