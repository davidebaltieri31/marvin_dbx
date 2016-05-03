#include <iostream>
#include "marvin_call.hpp"

int main(int argc, char** argv)
{
	if (argc < 3 || argc >10){
		std::cout << "Usage:" << std::endl;
		std::cout << argv[0] << " train network.json [model1.marvin[,model2.marvin,...]] [snapshot_iteration]" << std::endl;
		std::cout << "       example: " << argv[0] << " train examples/mnist/lenet.json" << std::endl;
		std::cout << argv[0] << " test network.json model1.marvin[,model2.marvin,...] response_name1[,name2,...] file_name1.tensor[,name2.tensor,...] [save_every_n_iterations]" << std::endl;
		std::cout << "       example: " << argv[0] << " test examples/mnist/lenet.json examples/mnist/lenet.marvin ip1,conv2 examples/mnist/ip1.tensor,examples/mnist/conv2.tensor" << std::endl;
		std::cout << argv[0] << " activate network.json model1.marvin[,model2.marvin,...] response_name_data response_name1[,name2,...] response1_channels[,response2_channels,...] file_prefix topK maxIterations" << std::endl;
		std::cout << "       example: " << argv[0] << " activate examples/mnist/lenet.json examples/mnist/lenet.marvin data conv1,conv2 [0,1,2],[0,1,2,3,4,5] examples/mnist/filters_ 100 20" << std::endl;
		return 0;

	}

	marvin_dbx::call_marvin(argc, argv);
	return 0;
}