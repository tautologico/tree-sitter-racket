=====
Lists
=====

#lang test
(max 11 55 33)
'(1 . 2)
[list "a" "c"]
'{}
(cond [(zero? n) 0]
      [else (+ n m)])

---

(source_file
  (lang_line (symbol))
  (datum (list_or_pair (datum (symbol))
                       (datum (number))
                       (datum (number))
                       (datum (number))))
  (datum (quoted_datum (datum (list_or_pair (datum (number))
                                            (dot)
                                            (datum (number))))))
  (datum (list_or_pair (datum (symbol))
                       (datum (string))
                       (datum (string))))
  (datum (quoted_datum (datum (list_or_pair))))
  (datum (list_or_pair (datum (symbol))
                       (datum (list_or_pair (datum (list_or_pair (datum (symbol))
                                                                 (datum (symbol))))
                                            (datum (number))))
                       (datum (list_or_pair (datum (symbol))
                                            (datum (list_or_pair (datum (symbol))
                                                                 (datum (symbol))
                                                                 (datum (symbol)))))))))
