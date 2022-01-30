import hashlib
 
test = input()
sha = hashlib.sha256(test.encode('utf-8'))

print(sha.hexdigest())

