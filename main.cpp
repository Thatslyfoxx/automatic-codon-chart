#include<iostream>
#include<cstdlib>
#include <unistd.h>
using namespace std;

 
 
 
 
int main () 
 
{
  
 
std::string name, Codon;
  
 
std::cout << "Please Enter Your Codon:\n ";
  
std::getline (std::cin, Codon);
  
if (std::cin,
       Codon == "GGG" or Codon == "GGA" or Codon == "GGC" or Codon ==
       "GGU" or Codon == "ggg" or Codon == "gga" or Codon == "ggu" or Codon ==
       "ggc")
    {
      
 
std::cout << "Glycine - Gly\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "GAG" or Codon == "GAA" or Codon == "gag" or Codon == "gaa")
    {
      
 
std::cout << "Glutamic Acid - Glu\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
 
if (std::cin,
	   Codon == "GAC" or Codon == "GAU" or Codon == "gac" or Codon ==
	   "gau")
    {
      
 
std::cout << "Aspartic acid - Asp\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
 
if (std::cin,
	   Codon == "GCG" or Codon == "GCA" or Codon == "GCU" or Codon ==
	   "GCC" or Codon == "gcg" or Codon == "gca" or Codon ==
	   "gcu" or Codon == "gcc")
    {
      
 
std::cout << "Alanine - Ala\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "GUG" or Codon == "GUA" or Codon == "GUC" or Codon ==
	 "GUA" or Codon == "gug" or Codon == "gua" or Codon ==
	 "guu" or Codon == "guc")
    {
      
 
std::cout << "Valine - Val\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "AGG" or Codon == "AGA" or Codon == "agg" or Codon == "aga")
    {
      
 
std::cout << "Arginine - Arg\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "AGC" or Codon == "AGU" or Codon == "agc" or Codon == "agu")
    {
      
 
std::cout << "Serine - Ser";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "AAG" or Codon == "AAA" or Codon == "aag" or Codon == "aaa")
    {
      
 
std::cout << "Lysine - Lys\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "AAC" or Codon == "AAU" or Codon == "aac" or Codon == "aau")
    {
      
 
std::cout << "Asparagine - Ans\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "ACG" or Codon == "ACA" or Codon == "ACC" or Codon ==
	 "ACU" or Codon == "acg" or Codon == "aca" or Codon ==
	 "acu" or Codon == "acc")
    {
      
 
std::cout << "Threonine - Thr\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin, Codon == "AUG" or Codon == "aug")
    {
      
std::cout << "Methionine - Met / Start\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "AUA" or Codon == "AUC" or Codon == "AUU" or Codon ==
	 "aua" or Codon == "auu")
    {
      
std::cout << "Isoleucine - Ile\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
 
if (std::cin, Codon == "AUG" or Codon == "aug")
    {
      
std::cout << "Methionine - Met / Start\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "CGG" or Codon == "CGA" or Codon == "CGC" or Codon ==
	 "CGU" or Codon == "cgg" or Codon == "cga" or Codon ==
	 "cgu" or Codon == "cgc")
    {
      
 
std::cout << "Arginine - Arg\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "CAG" or Codon == "CAA" or Codon == "cag" or Codon == "caa")
    {
      
 
std::cout << "Glutamine - Gln\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "CAC" or Codon == "CAU" or Codon == "cac" or Codon == "cau")
    {
      
 
std::cout << "Histidine - His\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "CCG" or Codon == "CCA" or Codon == "CCC" or Codon ==
	 "CCU" or Codon == "ccg" or Codon == "cca" or Codon ==
	 "ccu" or Codon == "ccc")
    {
      
 
std::cout << "Proline - Pro\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "CUG" or Codon == "CUA" or Codon == "CUC" or Codon ==
	 "CUU" or Codon == "cug" or Codon == "cua" or Codon ==
	 "cuu" or Codon == "cuc" or Codon == "UUA" or Codon ==
	 "UUG" or Codon == "uua" or Codon == "uug")
    {
      
 
std::cout << "Leucine - Leu\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin, Codon == "UGG" or Codon == "ugg")
    {
      
std::cout << "Tryptopan - Trp\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "UGA" or Codon == "UAA" or Codon == "UAG" or Codon ==
	 "uga" or Codon == "uaa" or Codon == "uag")
    {
      
std::cout << "Stop\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "UGU" or Codon == "UGC" or Codon == "ugu" or Codon == "ugc")
    {
      
 
std::cout << "Cysteine - Cys\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "UAU" or Codon == "UAC" or Codon == "uau" or Codon == "uac")
    {
      
 
std::cout << "Tyrosine - Tyr\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "UCA" or Codon == "UCA" or Codon == "UCC" or Codon ==
	 "UCU" or Codon == "ucg" or Codon == "uca" or Codon ==
	 "ucu" or Codon == "ucc")
    {
      
 
std::cout << "Serine - Ser\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "UUU" or Codon == "UUC" or Codon == "uuu" or Codon == "uuc")
    {
      
std::cout << "Phenylalanine - Phe\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin,
	 Codon == "UWU" or Codon == "OWO" or Codon == "uwu" or Codon == "owo")
    {
      
std::cout << "furry\n";
    
}
  
  else
    
    {
      
std::cout << "\n";
    }
  
 
if (std::cin, Codon == "who made you?")
    {
      
std::cout << "Thatslyfoxx!\n";
    }

}


 
 
//this took me way to long to make...
//im so tired :')
  
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
 
