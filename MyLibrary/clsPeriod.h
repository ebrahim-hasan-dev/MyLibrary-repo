#pragma once

#include "clsDate.h";

class clsPeriod
{
private:

	clsDate _StartDate;
	clsDate _EndDate;

public:

	clsPeriod(clsDate StartD, clsDate EndD)
	{
		_StartDate = StartD;
		_EndDate = EndD;
	}

	void SetStartDate(clsDate StartD)
	{
		_StartDate = StartD;
	}
	clsDate GetStartDate()
	{
		return _StartDate;
	}

	void SetEndDate(clsDate EndD)
	{
		_EndDate = EndD;
	}
	clsDate GetEndDate()
	{
		return _EndDate;
	}

	static bool PeriodsIsOverLap_FasterAndBetterAlgorithm(clsPeriod Period1, clsPeriod Period2)
	{
		if (clsDate::CompareDates(Period1._EndDate, Period2._StartDate) == clsDate::Results::Before)
		{
			return false;
		}
		
		if (clsDate::CompareDates(Period1._StartDate, Period2._EndDate) == clsDate::Results::After)
		{
			return false;
		}

		return true;

	}

	static int PeriodLength(clsPeriod Period, bool IncludeEnd = false) 
	{
		return clsDate::GetDiffrenceBetweenDate1AndDate2_FastAlgorithm(Period._StartDate, Period._EndDate, IncludeEnd);
	}

	private :

	static bool IsDateinPeriod(clsPeriod Period, clsDate Date)
	{
		
		return !(clsDate::CompareDates(Date, Period._StartDate) == clsDate::Results::Before || clsDate::CompareDates(Date, Period._EndDate) == clsDate::Results::After);
	}

	public:

	bool IsDateinPeriod(clsDate Date)
	{
		return IsDateinPeriod(*this, Date);
	}

	static int CountOverLapDays(clsPeriod Period1, clsPeriod Period2)
	{

		int Count = 0;
		
		while (IsDateinPeriod(Period1, Period2._StartDate))
		{
			Count++;

			if (clsDate::IsDate1EqualDate2(Period2._StartDate, Period2._EndDate))
			{
				break;
			}

			clsDate::IncreaseDateByOneDay(Period2._StartDate);
		}

		while (IsDateinPeriod(Period2, Period1._StartDate))
		{
			Count++;

			if (clsDate::IsDate1EqualDate2(Period1._StartDate, Period1._EndDate))
			{
				break;
			}

			clsDate::IncreaseDateByOneDay(Period1._StartDate);
		}

		return Count;
	}
	int CountOverLapDaysBetweenMyPeriodAndPeriod2(clsPeriod Period2)
	{
		return CountOverLapDays(*this, Period2);
	}

	void Print()
	{
		cout << endl <<_StartDate.GetDay() << "/" << _StartDate.GetMonth() << "/" << _StartDate.GetYear() << endl;
		cout << _EndDate.GetDay() << "/" << _EndDate.GetMonth() << "/" << _EndDate.GetYear() << endl << endl;
	}

};
