<h2><a href="https://codeforces.com/contest/1234/problem/A" target="_blank" rel="noopener noreferrer">1234A — Equalize Prices Again</a></h2>

| | |
|---|---|
| **Difficulty** | 800 |
| **Language** | C++23 (GCC 14-64, msys2) |
| **Verdict** | ✅ Accepted |
| **Problem Link** | [Codeforces 1234A](https://codeforces.com/contest/1234/problem/A) |

## Topics
`math`

---

## Problem Statement

<div class="header"><div class="title">A. Equalize Prices Again</div><div class="time-limit"><div class="property-title">time limit per test</div>1 second</div><div class="memory-limit"><div class="property-title">memory limit per test</div>256 megabytes</div><div class="input-file input-standard"><div class="property-title">input</div>standard input</div><div class="output-file output-standard"><div class="property-title">output</div>standard output</div></div><div><p>You are both a shop keeper and a shop assistant at a small nearby shop. You have $$$n$$$ goods, the $$$i$$$-th good costs $$$a_i$$$ coins.</p><p>You got tired of remembering the price of each product when customers ask for it, thus you decided to simplify your life. More precisely you decided to set the same price for all $$$n$$$ goods you have.</p><p>However, you don't want to lose any money so you want to choose the price in such a way that the sum of new prices is not less than the sum of the initial prices. It means that if you sell all $$$n$$$ goods for the new price, you will receive at least the same (or greater) amount of money as if you sell them for their initial prices.</p><p>On the other hand, you don't want to lose customers because of big prices so among all prices you can choose you need to choose the minimum one.</p><p>So you need to find the minimum possible equal price of all $$$n$$$ goods so if you sell them for this price, you will receive at least the same (or greater) amount of money as if you sell them for their initial prices.</p><p>You have to answer $$$q$$$ independent queries.</p></div><div class="input-specification"><div class="section-title">Input</div><p>The first line of the input contains one integer $$$q$$$ ($$$1 \le q \le 100$$$) — the number of queries. Then $$$q$$$ queries follow.</p><p>The first line of the query contains one integer $$$n$$$ ($$$1 \le n \le 100)$$$ — the number of goods. The second line of the query contains $$$n$$$ integers $$$a_1, a_2, \dots, a_n$$$ ($$$1 \le a_i \le 10^7$$$), where $$$a_i$$$ is the price of the $$$i$$$-th good.</p></div><div class="output-specification"><div class="section-title">Output</div><p>For each query, print the answer for it — the minimum possible equal price of all $$$n$$$ goods so if you sell them for this price, you will receive at least the same (or greater) amount of money as if you sell them for their initial prices.</p></div><div class="sample-tests"><div class="section-title">Example</div><div class="sample-test"><div class="input"><div class="title">Input<div title="Copy" data-clipboard-target="#id0014683897514531907" id="id0012350151856286884" class="input-output-copier">Copy</div></div><pre id="id0014683897514531907">3
5
1 2 3 4 5
3
1 2 2
4
1 1 1 1
</pre></div><div class="output"><div class="title">Output<div title="Copy" data-clipboard-target="#id0038582287372675284" id="id006411694749473619" class="input-output-copier">Copy</div></div><pre id="id0038582287372675284">3
2
1
</pre></div></div></div>