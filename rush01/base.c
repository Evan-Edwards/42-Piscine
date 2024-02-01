/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   base.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: irychkov <irychkov@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/01/20 15:58:09 by irychkov          #+#    #+#             */
/*   Updated: 2024/01/20 18:34:15 by irychkov         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int isFilled(int size, int solution[][size])
{
	while (row < size)
	{
		while (col < size)
		{
			if (solution[row][col] == 0)
			{
				return (0);
			}
			col = col + 1;
		}
		row = row + 1;
	}
    return (1);
}

int	checkSet(int size, int set, int line[], int value)
{
    int visibleCount;
    int maxHeight;
	int i;

	i = 0;
	maxHeight = 0;
	visibleCount = 0;
	while (i < size)
	{
		if (line[i] > maxHeight)
		{
			maxHeight = line[i];
			visibleCount++;
        }
		i++,
    }
    if (visibleCount != set)
	{
        return (0);
    }
    if (value > maxHeight)
	{
        return (1);
    }
    return (0);
}

int check_set_and_line(int size, int set[], int solution[], int row, int col, int value)
{
	int	i;

	i = 0;
	while (i < size)
	{
		if (solution[row][i] == value || solution[i][col] == value)
		{
			return(0);
		}
		i = i + 1;
	}
}

int ft_brute(int set[], int solutions[], int size)
{ 
	int	row, col;
	int	value;

	value = 1;
	row = 0;
	col = 0;
	if (isFilled(size, solution))
	{
	return(1);
	}
	while (row < size)
	{
		while (col < size)
		{
			while (value <= size)
			{
				if checkSet((size, set, solution, row, col, value))
				{
				solution[row][col] == value;
				}
				if (ft_brute(size, set, solution))
				{
					return(1);
				}
				solution[row][col] = 0;
				value = value + 1;
			}
			col = col + 1;
		}
		row = row + 1;
	}
	return(0);
}
void printSolution(int size, int solution[][size])
{
    for (int row = 0; row < size; row++)
	{
        for (int col = 0; col < size; col++)
		{
            printf("%d ", solution[row][col]);
        }
        printf("\n");
    }
}

int main()
{
    int size = 4;
    int set[] = { 4, 3, 2, 1, 1, 2, 2, 2, 2, 4, 3, 2, 1, 2, 2, 2 };
    int solution[size][size];

    if (ft_brute(sizze, set, solution)) 
	{
        printf("Solution found:\n");
        printSolution(size, solution);
    }
	else
	{
        printf("No solution found.\n");
    }

    return 0;
}
