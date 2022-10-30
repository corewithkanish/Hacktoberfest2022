import qrcode as qr


features = qr.QRCode(version= 1,border = 10,box_size = 100)

features.add_data('https://www.google.com')
features.make(fit = True)


generate = features.make_image(back_color = 'red',fill = 'violet')
generate.save('imageqrcode.png')
