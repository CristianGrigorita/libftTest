int my_atoi (char *str)
{
        int     i;
        int     n;
        int     neg;

        neg = 0;
        i = 0;
        n = 0;

        while ((str[i] == ' ') || (str[i] == '  '))
        {
        i++;
                if (str[i] == '-')
                        neg = 1;
                if ((str[i] == '-') || (str[i] == '+'))
                        i++;
                while(str[i] >= '0' && str[i] <= '9')
                {
                        n = n * 10;
                        n = n + ((int)str[i] - 48);
                        i++;
                };
        if (neg == 1)
                return (-n);
        else
                return (n);
        }
        return (0);
}