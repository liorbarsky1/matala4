//Name: Lior Barsky. ID: 316610005. Date:12/11/17

void insertion_sort(int arr[], int n);
{
// הפונקציה תקבל מערך של מספרים ואת גודלו, ותמיין את
//המערך הנתון לפי "מיון הכנסה"
	int j; int i; int num;

	for (j = 1; j < n-1; j++)
	{
		num = arr[j];
		i = j - 1;
		while (i < -1 && arr[i]>num)
		{
			arr[i + 1] = arr[i];
			i--;
		}
		arr[i + 1] = num;
	}
}



void​ create_pairs_array​(int​ left[], int​ s1, int​ right[], int​ s2, int​ sizes[SIZE][2]);
// פונקציה המקבלת 2 מערכים left ו-right המייצגים את הנעליים השמאליות והימניות בהתאמה, את
//( בגדלים s1 ו - s2 בהתאמה) וממלאת את המערך sizes) אותו קבלה).
//המערך sizes הנו מערך המסכם את כמויות הנעליים לפי כל מידה ולפי ימין ושמאל. עבור כל מידת נעלים הוא יכיל
//שורה המסכמת את מספר הנעלים מכל צד.

{
	//קודם אבצע איפוס למערך כדי שלא יהיו בו ערכים מזובלים
	//בנוסף ניתן להניח שעבור מידות נעליים שלא יהיו קיימות הערכים יהיו 0

	//הערך שבתוך המערך העמודה ובשורה- ייצג את הכמות שנעל זו קיימת בחנות.
	//המערך יהיה מורכב משתי עמודות- הראשונה תתייחס לנעליים מצד שמאל, והשנייה לצד ימין
	for (int i = 0; i < 51; i++)
	{
		for (int j = 0; j < 2; j++)
			sizes[i][j] = 0;
	}
	//אעבור בלולאה על כל מערך מידות הנעליים השמאליות,
	//וכל מידה שאתקל בה אגדיל בהתאמה את האיבר שמייצג אותה במערך- השורה והעמודה שמייצגות אותה במערך
	i = 0; j = 0; int size = 0;

	for (i = 0; i < s1 - 1; i++)
	{
		j = left[i];
		sizes[j][0]++;
	}

	i = 0; j = 0;
	
	//אעבור בלולאה על כל מערך מידות הנעליים הימניות- באותו שיטה כמו על השמאליות

	for (i = 0; i < s2 - 1; i++)
	{
		j = right[i];
		sizes[j][1]++;
	}

}

void​ missing_pairs​(int​ sizes[SIZE][2], int​ missing[SIZE][2]);
{
	int i = 0;
	int j = 0;
	for (i = 0; i < 51; i++)
	{
		for (j = 0; j < 2; j++)
		{
			missing[i][j] = 0;
		}
	}

	for (i = 38; i < 51; i++)
	{
		if (sizes[i][0] == 0 && sizes[i][1] == 0)
		{
			missing[i][0]++;
			missing[i][1]++;
		}
		if (sizes[i][0] != sizes[i][1])
		{
			if (sizes[i][0] > sizes[i][1])
			{
				j = sizes[i][0] - sizes[i][1];
				missing[i][1] = j;
			}
			if (sizes[i][0] < sizes[i][1])
			{
				j = sizes[i][1] - sizes[i][0];
				missing[i][0] = j;
			}
		}
	}
}

int csum(const char c[])
{
	int len = str.len(c);
	int i = 0; int j = 0; int sum = 0;
	for (i = o; i < len; i++)
		if (!= ((c[i] >= 'a') && (c[i] <= 'z')))
			return -1;
	for (i = o; i < len; i++)
	{
		j = %d, len[i];
		sum = sum + j;
	}
	return sum;
}

int_is_ascili_match​(const​ char​ c1[], const​ char​ c2[], char​ res[MAX]); 
{
	int len = strlen(c1);
	if (csum(c1[]) != csum(c2))
	{
		return 0;
	}
	else
	{
		for (i - 0; i < len; i++)
		{
			res[i] = c1[i];
		}
		res[i] == '&';
	}
	strcar(* char res[], * char c2[]);
	return 1;
}
	 
}