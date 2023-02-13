/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   contact.hpp                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: psuanpro <Marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/13 22:52:58 by psuanpro          #+#    #+#             */
/*   Updated: 2023/02/13 23:55:44 by psuanpro         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef CONTACT_H
# define CONTACT_H

#include <iostream>

class	Contact {
	private:
		int a;
		int b;
	public:
		Contact(int a, int b) {
			this->a = a;
			this->b = b;
		}
		~Contact() {
			std::cout << "Goodbye Contact" << std::endl;
		}
		void PrintOut() {
			std::cout << "A " << this->a << std::endl;
			std::cout << "B " << this->b << std::endl;
		}
		void setTer(int a, int b) {
			this->a = a;
			this->b = b;
		}
		void swap() {
			int	tmp;
			tmp = this->a;
			this->a = this->b;
			this->b = tmp;
		}
};

#endif
