package main;

type Stack struct {
	length int;
	storage []int;
}

func makeStack(size int) *Stack {
	return &Stack{storage: make([]int, size), length: 0}
}

func (s *Stack) Push(element int){
	if s.length == len(s.storage){
		panic("Stack overflow")
	}

	s.storage[s.length] = element
	s.length ++
}

func (s *Stack) Pop() int {
	if s.length == 0 {
		panic("Stack underflow")
	}

	s.length --
	return s.storage[s.length]
}

func (s *Stack) Empty() bool {
	return s.length == 0
}

func main() {

	for i := 1; i <= 100; i ++ {

		switch {
			case (i % 5 == 0) && (i % 3 == 0):
				println("FizzBuzz")
			case (i % 5 == 0):
				println("Buzz")
			case (i % 3 == 0):
				println("Fizz")
			default:
				println(i)
		}
	}

	s := makeStack(5)

	for i := 1; i < 6; i ++ {
		s.Push(i)
	}

	s.Push(1)

	for !s.Empty() {
		println(s.Pop())
	}

}
