override SRC_DIR := srcs

override ARRAY_SRC := \
	main \

override SRCS := $(addprefix $(SRC_DIR)/, $(addsuffix .cpp, $(ARRAY_SRC)))