  %0 = load i32, i32* %key, align 4
  %a = getelementptr %struct.Point* %u, i32 0
  store i32 %0, i32* %a, align 4
  %b = getelementptr %struct.Point* %u, i32 1
  store i32 0, i32* %b, align 4
