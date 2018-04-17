u_t_inicial.pdf : u_t_inicial.txt u_t_final.pdf
	python u_t_inicial.py
	rm u_t_inicial.rs
	rm u_t_inicial.txt	

u_t_inicial.txt: u_t_inicial.rs
	./u_t_inicial.rs > u_t_inicial.txt

u_t_inicial.rs:
	c++ redbone.cpp -o u_t_inicial.rs

u_t_final.pdf : u_t_final.txt
	python u_t_final.py
	rm u_t_final.rs
	rm u_t_final.txt	

u_t_final.txt: u_t_final.rs
	./u_t_final.rs > u_t_final.txt

u_t_final.rs:
	c++ childish.cpp -o u_t_final.rs
