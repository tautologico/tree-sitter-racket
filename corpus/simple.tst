=============
Simple datums
=============

#lang test
32                ; this is a line comment
'akaibara
"a little string"
#t
#F
#T

---

(source_file
  (lang_line (symbol))
  (datum (number))
  (datum (quoted_datum (datum (symbol))))
  (datum (string))
  (datum (boolean (true_lit)))
  (datum (boolean (false_lit)))
  (datum (boolean (true_lit)))
  )
