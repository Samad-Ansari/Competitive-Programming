for i in range(4,8):
	for j in range(16,32):
		for k in range(64, 128):
			for l in range(1,2):
				if i^j^k^l == 85:
					print(i,j,k,l)