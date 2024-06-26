#ifndef FIXED_HPP
# define FIXED_HPP

#include <iostream>
 
class Fixed
{
	private:
		int					m_fixed_nb;
		static const int	m_fact_bits = 8;

	public:
	Fixed();
	Fixed( const Fixed &to_copy );
	~Fixed();
	Fixed &operator=( const Fixed& other );

	int		getRawBits( void ) const;
	void	setRawBits( int const raw );
};

#endif