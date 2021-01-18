#include <iostream>
#include<vector>
#include<fstream>

struct point
{
	int x; int y;
};

struct task {
	int score;
	int numberOfPoints;
	std::vector<point> assemblyPoints;
};



int main()
{

	std::ifstream file;
	file.open("files/a_example.txt");


	int W, H, R, M, T, L;
	std::vector<point> mountPoints;

	std::vector<task> tasks;

	file >> W >> H >> R >> M >> T >> L;

	for (int i = 0; i < M; i++)
	{
		point temp;
		file >> temp.x >> temp.y;
		mountPoints.push_back(temp);
	}

	for (int i = 0; i < T; i++)
	{
		task temp;
		file >> temp.score >> temp.numberOfPoints;
		for (int j = 0; j < temp.numberOfPoints; j++)
		{
			point tempPoint;
			file >> tempPoint.x >> tempPoint.y;
			temp.assemblyPoints.push_back(tempPoint);
			
		}
		tasks.push_back(temp);
	}



	
	


	return 0;
}