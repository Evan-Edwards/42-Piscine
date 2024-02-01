

int	matrix[4][4] = {{0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}, {0, 0, 0, 0}};


void	print_matrix(char *input))
{
	int		i;
	int		j;
	char	temp;

	i = 0;
	j = 0;
	while (i < 4)
	{
		j = 0;
		while (j < 4)
		{
			temp = matrix[i][j] + 48;
			write (1, &elm, 1);
			write (1, " ", 1);
			j ++;
		}
		i++;
		write (1, '\n', 1);
	}
}

char	*input_to_arr(char **argv)
	int		i;
	int		j;
	int		count;
	char 	*input;
	char	*cond[17];

	input = argv[1];
	i = 0;
	j = 0;
	while (input[i])
	{
		if ((input[i] >= '1' && input[i] <= '4') && count <= 16)
			cond[j] = input [i];
			count++;
			j++:
		i++;
	}
	if (count == 16)
		cond[j] = '\0';
		return (cond);
	else
		return ("invalid input");
}

