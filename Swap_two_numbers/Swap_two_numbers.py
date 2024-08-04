''' INITIALIZATION '''
a = 1
b = 0

print("a: %d, b: %d" % (a, b))

''' SWAP TWO VARIABLES '''
# two values in parentheses in explanations bleow means (original a bit, original b bit)
a = a ^ b # each bit where (1,0) or (0,1) of new a is 1 and 0 where (0,0) or (1,1)
# let's call new a 'XORresult' for a explanations below

# final b is XORresult XOR original b(which is original a), final a is XORresult XOR original a(which is original b)

# XORresult has bit 1 where (1,0) or (0,1)
# so if we XOR this value with original value(let's call it original comparison value), bit where both a and b have bit 1 results to 1 because XORresult bit is 0
# and also bit of original comparison value is 0 but that of XORresult is 1, in other words, bit of original target value is 1 results to 1
# as a result, b now is original target value, a
b = b ^ a # each bit of final b is 1 where (1,1) or (1,0), in other words, where original a bit is 1
a = a ^ b # by the same reason, each bit of final a is where (0,1) or (1,1)

print("a: %d, b: %d" % (a, b))