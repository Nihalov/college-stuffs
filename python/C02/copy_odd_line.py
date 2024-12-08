def copy_odd_line(inp_file, out_file):
  with open(inp_file, 'r') as inp, open(out_file, 'w') as out:
    for index,line in enumerate(inp,1):
      if index%2!=0:
          out.write(line)
  print(f"odd lines from {inp_file} as added to {out_file}")
inp_file="C:/basic programming/python/C02/oddEvenLines.txt"
out_file="C:/basic programming/python/C02/oddLines.txt"
copy_odd_line(inp_file, out_file)