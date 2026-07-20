#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
int main()
{
    int fileSize, pageSize;
    cout << "Logical Address To Physical Address\n";
    cout << "Enter the Size of File : ";
    cin >> fileSize;
    cout << "Enter the Page Size : ";
    cin >> pageSize;

    if (fileSize <= 0 || pageSize <= 0)
    {
        cout << "Invalid input.\n";
        return 0;
    }

    int totalPages = (fileSize + pageSize - 1) / pageSize;
    vector<int> frameToPage(totalPages), pageToFrame(totalPages);

    for (int i = 0; i < totalPages; i++)
        frameToPage[i] = i;
    for (int i = 0; i < totalPages; i++)
    {
        int j = (i * 7 + 3) % totalPages;
        swap(frameToPage[i], frameToPage[j]);
    }
    for (int i = 0; i < totalPages; i++)
        pageToFrame[frameToPage[i]] = i;

    cout << "\n********************************";
    cout << "\nThe Structure of Main Memory";
    cout << "\n********************************\n";
    cout << "Frame Page\n";
    cout << "Number Number\n";
    cout << "------	\n";

    for (int i = 0; i < totalPages; i++)
        cout << i << "\t" << frameToPage[i] << '\n';
    int pageNumber, offset;
    cout << "********************************\n";
    cout << "Enter The Logical Address\n";
    cout << "Page Number : ";
    cin >> pageNumber;
    cout << "Offset : ";
    cin >> offset;
    cout << "********************************\n";

    if (pageNumber < 0 || pageNumber >= totalPages || offset < 0 || offset >= pageSize)
    {
        cout << "Invalid logical address\n";
        return 0;
    }

    int physicalAddress = pageToFrame[pageNumber] * pageSize + offset;
    cout << "Physical Address : " << physicalAddress << '\n';
    cout << "********************************\n";

    return 0;
}
