#include <iostream>
#include<vector>

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
	int W, H, R, M, T, L;
	std::vector<point> mountPoints;

	std::cin >> W >> H >> R >> M >> T >> L;

	for (int i = 0; i < M; i++)
	{
		point temp;
		std::cin >> temp.x >> temp.y;
		mountPoints.push_back(temp);
	}

	for (int i = 0; i < T; i++)
	{
		task temp;
		std::cin >> temp.score >> temp.numberOfPoints;
		for (int j = 0; j < temp.numberOfPoints; j++)
		{
			point tempPoint;
			std::cin >> tempPoint.x >> tempPoint.y;
			temp.assemblyPoints.push_back(tempPoint);

		}
	}

	return 0;
}