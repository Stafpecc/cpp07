override SRC_DIR := srcs

override ITER_SRC := \
	main \

override SRCS := $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(ITER_SRC)))