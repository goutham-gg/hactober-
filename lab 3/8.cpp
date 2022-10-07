#include <stdio.h>
#include <queue>
using namespace std;

int main() {
long long t;
scanf("%lld", &t);
while (t--)
{
long long n, z;
scanf("%lld %lld", &n, &z);
priority_queue<int> ans_queue;
for (long long x = 0; x < n; x++)
{
long long temp;
scanf("%lld", &temp);
ans_queue.push(temp);
}

long long ans = 0;
bool flag = true;
while (z > 0)
{
long long temp;
temp = ans_queue.top();
if (temp == 0)
{
flag = false;
break;
}
else
{
ans_queue.pop();
z -= temp;
temp /= 2;
ans_queue.push(temp);
ans++;
}

}
if (z <= 0 && flag == true)
printf("%lld\n", ans);
else
printf("Evacuate\n");
}
}