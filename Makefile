.DEFAULT_GOAL := all
norminette:
	-norminette ./ex00/ft_create_elem.c ./ex00/ft_list.h
	-norminette ./ex01/ft_list_push_front.c ./ex01/ft_list.h
	-norminette ./ex02/ft_list_size.c ./ex02/ft_list.h
	-norminette ./ex03/ft_list_last.c ./ex03/ft_list.h
	-norminette ./ex04/ft_list_push_back.c ./ex04/ft_list.h
	-norminette ./ex05/ft_list_push_strs.c ./ex05/ft_list.h
	-norminette ./ex06/ft_list_clear.c ./ex06/ft_list.h
	-norminette ./ex07/ft_list_at.c ./ex07/ft_list.h
	-norminette ./ex08/ft_list_reverse.c ./ex08/ft_list.h
# -norminette ./ex09/ft_atoi_base.c
# -norminette ./ex10/ft_atoi_base.c
# -norminette ./ex11/ft_atoi_base.c
# -norminette ./ex12/ft_atoi_base.c
# -norminette ./ex13/ft_atoi_base.c
# -norminette ./ex14/ft_atoi_base.c
# -norminette ./ex15/ft_atoi_base.c

compile: norminette
	-gcc ./ex00/ft_create_elem.c test_ex00_ft_create_elem.c -Wall -Werror -Wextra -o test_ex00_ft_create_elem
	-gcc ./ex01/ft_list_push_front.c \
	./ex00/ft_create_elem.c \
	test_ex01_ft_list_push_front.c -Wall -Werror -Wextra -o test_ex01_ft_list_push_front
	-gcc ./ex02/ft_list_size.c \
	./ex00/ft_create_elem.c \
	./ex01/ft_list_push_front.c \
	test_ex02_ft_list_size.c -Wall -Werror -Wextra -o test_ex02_ft_list_size
	-gcc ./ex03/ft_list_last.c \
	./ex00/ft_create_elem.c \
	./ex01/ft_list_push_front.c \
	./ex02/ft_list_size.c \
	test_ex03_ft_list_last.c -Wall -Werror -Wextra -o test_ex03_ft_list_last
	-gcc ./ex04/ft_list_push_back.c \
	./ex00/ft_create_elem.c \
	./ex01/ft_list_push_front.c \
	./ex02/ft_list_size.c \
	./ex03/ft_list_last.c \
	test_ex04_ft_list_push_back.c -Wall -Werror -Wextra -o test_ex04_ft_list_push_back
	-gcc ./ex05/ft_list_push_strs.c \
	./ex00/ft_create_elem.c \
	./ex01/ft_list_push_front.c \
	./ex02/ft_list_size.c \
	./ex03/ft_list_last.c \
	./ex04/ft_list_push_back.c \
	test_ex05_ft_list_push_strs.c -Wall -Werror -Wextra -o test_ex05_ft_list_push_strs

# -gcc ./ex03/ft_atoi.c test_ex03_ft_atoi.c -Wall -Werror -Wextra -o test_ex03_ft_atoi
# -gcc ./ex04/ft_putnbr_base.c test_ex04_ft_putnbr_base.c -Wall -Werror -Wextra -o test_ex04_ft_putnbr_base
# -gcc ./ex05/ft_atoi_base.c ./ex05/ft_strlen.c test_ex05_ft_atoi_base.c -Wall -Werror -Wextra -o test_ex05_ft_atoi_base

# build-sample: compile
# 	-./test_ex00_ft_strlen > result_sample_ex00_ft_strlen.txt
# 	-./test_ex01_ft_putstr > result_sample_ex01_ft_putstr.txt
# 	-./test_ex02_ft_putnbr > result_sample_ex02_ft_putnbr.txt
# 	-./test_ex03_ft_atoi > result_sample_ex03_ft_atoi.txt
# 	-./test_ex04_ft_putnbr_base > result_sample_ex04_ft_putnbr_base.txt
# 	-./test_ex05_ft_atoi_base > result_sample_ex05_ft_atoi_base.txt

run:	compile
	-./test_ex00_ft_create_elem > result_current_ex00_ft_create_elem.txt
	-./test_ex01_ft_list_push_front > result_current_ex01_ft_list_push_front.txt
# 	-./test_ex02_ft_list_size > result_current_ex02_ft_list_size.txt
# 	-./test_ex02_ft_putnbr > result_current_ex02_ft_putnbr.txt
# 	-./test_ex03_ft_atoi > result_current_ex03_ft_atoi.txt
# 	-./test_ex04_ft_putnbr_base > result_current_ex04_ft_putnbr_base.txt
# 	-./test_ex05_ft_atoi_base > result_current_ex05_ft_atoi_base.txt

all:	norminette	compile run

# test:	all
# 	-diff result_current_ex00_ft_strlen.txt result_sample_ex00_ft_strlen.txt
# 	-diff result_current_ex01_ft_putstr.txt result_sample_ex01_ft_putstr.txt
# 	-diff result_current_ex02_ft_putnbr.txt result_sample_ex02_ft_putnbr.txt
# 	-diff result_current_ex03_ft_atoi.txt result_sample_ex03_ft_atoi.txt
# 	-diff result_current_ex04_ft_putnbr_base.txt result_sample_ex04_ft_putnbr_base.txt
# 	-diff result_current_ex05_ft_atoi_base.txt result_sample_ex05_ft_atoi_base.txt

clean:
	-rm -rf */*.out
	-rm -rf result_current_ex*.txt
	-rm test_ex00_ft_create_elem
	-rm test_ex01_ft_list_push_front
	-rm test_ex02_ft_list_size
	-rm test_ex03_ft_list_last
# 	-rm test_ex03_ft_atoi
# 	-rm test_ex04_ft_putnbr_base
# 	-rm test_ex05_ft_atoi_base

clean-sample:
	-rm -rf result_sample_ex*.txt

clean-before-push-with-sample: clean
	-git add .
	-git commit -m "Build Sample Complete"
	-git push origin master

.PHONY: clean all norminette compile run
