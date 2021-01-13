import base64
password = "mot_de_passe".encode("utf-8")
encoded = base64.b64encode(password)

print(encoded)
