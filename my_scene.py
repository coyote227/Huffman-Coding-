from manim import *
from manim import Scene, Text, Circle,Write,UP
from collections import Counter


class treeBuilding(Scene):
    def construct(self):
        title  = Text("Huffman Coding")
        self.add(title)
        self.play(Write(title))
        self.play(title.animate.to_edge(UP))
        self.wait(1)
        file = open("lyrics.txt",'r') 
        ly = file.read()
        char_counts = Counter(ly)

        table = Table([
            ['a',str(char_counts['a'])],
            ['b',str(char_counts['b'])]],
            col_labels=[Text("Char"), Text("Frequency")],
            include_outer_lines = True 
        )
        self.play(Create(table),run_time = 3)
        self.wait(1)
        original = Text("a b a c a b a d")
        binary = Text("0 10 0 110 0 10 0 111").next_to(original, DOWN)
        self.play(Write(original))
        self.wait(0.5)
        self.play(TransformFromCopy(original, binary))

        
        # for i in file:
        #     list.append(i)
        # nf = 10
        # for i in list:
        #     if (i =ds= "n"): in list:
        #     if (i == "n"):
        #         nf +=1 in list
        # nFrequency = Text(f"no. of n's:",)
        # self.add(nFrequency)
        # self.play(Write(nFrequency))

          

