/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_J.cpp                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tbouzalm <tbouzalm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/08/11 14:00:44 by tbouzalm          #+#    #+#             */
/*   Updated: 2023/08/11 16:17:34 by tbouzalm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <stdlib.h>
#include <stdio.h> 
#include <vector>
#include <set>
#include <iostream>
#include <string>
#include <cstring>
#include <cmath>
using namespace std;

long long ga_ce_dd(long long int a, long long int b)
{
  if (b == 0)
    return (a);
  return ga_ce_dd(b, a % b);
}
 
long long least_common_multiple(long long a, long long b)
{
    return (a / ga_ce_dd(a, b)) * b;
}

int main()
{
    long long a,b;
    cin >> a >> b;
    long long result = 0;

    result = least_common_multiple(a, b);
    cout << result;
}