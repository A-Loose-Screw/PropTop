/*
 * This C++ source file was generated by the Gradle 'init' task.
 */
#ifndef PROPTOP_H
#define PROPTOP_H

#ifdef _WIN32
#define PROPTOP_EXPORT_FUNC __declspec(dllexport)
#else
#define PROPTOP_EXPORT_FUNC
#endif

#include <iostream>

namespace PropTop {
	class NeuralNetwork {
	 public:
		void test() {
			std::cout << "Test" << std::endl;
		}
	};
}

#endif
