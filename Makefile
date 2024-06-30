CC=gcc
CFLAGS=-I.
OBJ = src/catsay.o
OUTDIR = ./out
TARGET = catsay

$(OUTDIR)/%.o: %.c $(DEPS)
	$(CC) -c -o $@ $< $(CFLAGS)

$(OUTDIR)/$(TARGET): $(OBJ)
	$(CC) -o $@ $^ $(CFLAGS)

.PHONY: clean

clean:
	rm -f $(OUTDIR)/*.o *~ core $(INCDIR)/*~