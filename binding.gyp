{
  "targets": [{'target_name': "BLANK"}],
    'conditions': [
    ['OS=="win32"', {
      "targets": [
      {
        "target_name": "bthconnectable",
        "sources": [ "bth-connectable.cc" ]
      }
    ]
  }]]
}
