=============
Simple datums
=============

#lang test
32
'akaibara
"a little string"

---

(source_file
  (lang_line (identifier))
  (datum (number))
  (datum (quoted_datum (datum (identifier))))
  (datum (string))
  )
