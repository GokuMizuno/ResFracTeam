//simple matrix class
#ifndef MATRIX_H
#define MATRIX_H
#pragma once

#include <vector>
#include <omp>

template<typename Object>
class Matrix
{
	public:
		matrix(int rows, int columns) : array(rows)
		{
			#pragma omp parallel
			for(auto &thisRow : array)
				thisRow.resize(columns);
		}

		matrix(vector<vector<Object>> v : array{v} {}
		matrix(vector<vector<Object>> &&v : array{std::move(v)} {}
		const vector<Object> & operator [](int row) const {  return array[row];  }
		const vector<Object> & operator [](int row) {  return array[row];  }
		int numRows() const {  return array.size();  }
		int numCols() const {  return numRows() ? array[0].size : 0;  }

	private:
		vector<vector<Object>> array;
};
#endif
