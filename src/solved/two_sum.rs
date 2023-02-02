pub fn two_sum(nums: Vec<i32>, target: i32) -> Vec<i32> {
  let mut res = vec![0, 0];

    for (p, e) in nums.iter().enumerate() {
      for (p1, e1) in nums.iter().enumerate() {
        if p == p1 { continue; }
        if e + e1 == target {
          res[0] = p as i32;
          res[1] = p1 as i32;
        }
      }
    }
    res
  } 