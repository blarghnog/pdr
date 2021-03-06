Professor Bloomfield's Fall 2020 lectures
=========================================

[Go up to the main lectures page](../index.html) ([md](../index.md))

The code, images, and notes linked to from this page is what was discussed during the lecture periods in the fall of 2020 in Professor Bloomfield's 1:00pm - 1:50pm lecture periods.  Some notes about the content on this page:

- The code herein is what was the state at the end of that lecture period; the development of the code helped explain the concepts, and that can be found in the lecture recordings; thus, there are no comments included in the files.
- Any images that were sketched on [sketch.io](https://sketch.io/sketchpad/) are included as well (in SVG format).
- Unless stated otherwise in the code comments, all code is compiled with `clang++ *.cpp`.
    - However, a few of the lecture files have multiple programs, and each one will have to be compiled separately (`clang++ <file1>.cpp`, `clang++ <file2>.cpp`, etc.).
- The material gone over will have already been covered in the lecture recordings, but not necessarily that day's lecture recordings -- sometimes the review covers material from a past recording.

### Lecture period content

- Lecture 26: Fri, Oct 23 (assembly through slide 8.15)
    - [assembly.s](lec26/assembly.s.html) ([raw code](lec26/assembly.s))
    - [main.cpp](lec26/main.cpp.html) ([raw code](lec26/main.cpp))
    - [Makefile](lec26/Makefile.html) ([raw code](lec26/Makefile))
	- If you want to compile this on a Mac, you need to change the nasm output type from `elf64` to `macho64`, and change the name of the `factArray` and `factorial` subroutines to `_factArray` and `_factorial` (note the initial underscore; this is twice in the program for each name)
- Lecture 25: Wed, Oct 21 (assembly through slide 7.3)
	- [assembly.s](lec25/assembly.s.html) ([raw code](lec25/assembly.s))
	- [main.cpp](lec25/main.cpp.html) ([raw code](lec25/main.cpp))
	- [Makefile](lec25/Makefile.html) ([raw code](lec25/Makefile))
	- If you want to compile this on a Mac, you need to change the nasm output type from `elf64` to `macho64`, and change the name of the `addOrMult` subroutine to `_addOrMult` (note the initial underscore; this is twice in the program, on lines 9 and 13)
- Lecture 24: Mon, Oct 19 (assembly through slide 5.6)
    - As the lecture recording was posted late, this lecture period went over the content of that recording
- Lecture 23: Fri, Oct 16 (finished IBCM; finished the last two columns of trees)
	- No additional media; it was a Q&A on the IBCM lecture set and review of amortized analysis
- Lecture 22: Wed, Oct 14 (IBCM through slide 6.12)
    - [sketched image](lec22/lec22.svg)
- Lecture 21: Mon, Oct 12 (IBCM through slide 5.15)
	- No additional media; it was a Q&A on hashes and the hash lab
- Lecture 20: Fri, Oct 9 (finished hashes)
	- [Fall 2017, exam 2, question 5](lec20/f17-ex2-q5.svg)
    - [Fall 2017, exam 2, question 6](lec20/f17-ex2-q6.svg)
- Lecture 19: Wed, Oct 7 (hashes through slide 7.4)
    - [separate chaining diagram](lec19/lec19.svg)
- Lecture 18: Mon, Oct 5 (trees through slide 9.12; hashes through slide 5.5)
    - [code.txt](lec18/code.txt)
- Lecture 17: Fri, Oct 2 (trees through slide 7.31)
    - Animations are at [https://www.cs.usfca.edu/~galles/visualization/](https://www.cs.usfca.edu/~galles/visualization/)
    - [rotation before](lec17/after.svg), [rotation after](lec17/before.svg)
- Lecture 16: Wed, Sep 30 (trees through slide 7.9)
    - [Pseudo code for tree algorithm](lec16/pseudo-code.txt)
- Lecture 15: Mon, Sep 28 (trees through slide 5.11)
    - Animations are at [https://www.cs.usfca.edu/~galles/visualization/](https://www.cs.usfca.edu/~galles/visualization/)
    - [sketched image](lec15/lec15.svg)
- Lecture 14: Fri, Sep 25 (finished arrays arrays & big-Oh)
    - [graph image](lec14/img1.svg)
    - [big-Oh proof image](lec14/img2.svg)
- Lecture 13: Wed, Sep 23 (arrays & big-Oh to 5.8)
    - [errors-no-comments.cpp](lec13/errors-no-comments.cpp.html) ([raw code](lec13/errors-no-comments.cpp))
- Lecture 12: Mon, Sep 21 (finished numbers, arrays & big-Oh to 4.4)
    - [arrays.cpp](lec12/arrays.cpp.html) ([raw code](lec12/arrays.cpp))
	- compile with: `clang++ -Wall arrays.cpp`
    - [sketched image](lec12/lec12.svg)
- Lecture 11: Fri, Sep 18 (numbers through 9.21)
    - [Fall 2019, exam 1, question 10](lec11/img1.svg) ([exam PDF](../../../exams/exam1-f19.pdf))
    - [Spring 2019, exam 1, question 9, parts 1 and 2](lec11/img2.svg) ([exam PDF](../../../exams/exam1-s19.pdf))
    - [Spring 2019, exam 1, question 9, part 3](lec11/img3.svg) ([exam PDF](../../../exams/exam1-s19.pdf))
- Lecture 10: Wed, Sep 16 (numbers through slide 8.10)
    - [textual notes](lec10/notes.txt) as my Wacom tablet decided not to work that day
- Lecture 9: Mon, Sep 14 (finished lists; numbers through slide 5.2)
    - [vectors.cpp](lec09/vectors.cpp.html) ([raw code](lec09/vectors.cpp))
    - [sketched image](lec09/lec09.svg)
- Lecture 8: Fri, Sep 11 (lists through slide 6.11)
    - [copying.cpp](lec08/copying.cpp.html) ([raw code](lec08/copying.cpp))
    - [sketched image](lec08/lec08.svg)
- Lecture 7: Wed, Sep 9 (finished c++; lists through slide 4.6)
    - [destructors.cpp](lec07/destructors.cpp.html) ([raw code](lec07/destructors.cpp))
    - [sketched image](lec07/lec07.svg)
- Lecture 6: Mon, Sep 7 (c++ through slide 12.10)
    - [danglingptrs.cpp](lec06/danglingptrs.cpp.html) ([raw code](lec06/danglingptrs.cpp))
    - [parameters.cpp](lec06/parameters.cpp.html) ([raw code](lec06/parameters.cpp))
- Lecture 5: Fri, Sep 4 (c++ through slide 10.17)
    - [dynmem.cpp](lec05/dynmem.cpp.html) ([raw code](lec05/dynmem.cpp))
- Lecture 4: Wed, Sep 2 (c++ through slide 9.19)
    - [pointers.cpp](lec04/pointers.cpp.html) ([raw code](lec04/pointers.cpp))
- Lecture 3: Mon, Aug 31 (c++ through slide 8.1)
    - [item.cpp](lec03/item.cpp.html) ([raw code](lec03/item.cpp))
    - [item.h](lec03/item.h.html) ([raw code](lec03/item.h))
    - [main.cpp](lec03/main.cpp.html) ([raw code](lec03/main.cpp))
- Lecture 2: Fri, Aug 28 (finished course intro; c++ through slide 5.5)
    - [helloworld.cpp](lec02/helloworld.cpp.html) ([raw code](lec02/helloworld.cpp))
- Lecture 1: Aug 26: this class discussed the class structure, so no code was developed
