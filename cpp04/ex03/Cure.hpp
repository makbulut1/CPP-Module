#include "AMateria.hpp"

class Cure :public AMateria{
public:
	Cure(void);
	Cure(const Cure& other);
	
	Cure& operator=(const Cure& other);
	
	~Cure(void);
	AMateria* clone() const;
	void	use(ICharacter& target);
};