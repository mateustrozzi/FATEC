from flask import Flask, render_template
app = Flask(__name__)

@app.route("/teste")
def teste():
    return render_template('index.html')

@app.route("/")
def inicio():
    return "Olá mundo! - DSM - SEMII"

@app.route("/sobre")
def sobre():
    return """
    <head>
        <link rel='stylesheet' href='/static/style.css'>
    </head>
    <body>
        <h1>Gestão de Eventos - DW2</h1>
    </body>
    """


@app.route("/eventos")

def eventos():
    return "<h1 style='color: red; text-align: center; font-size: 48pt'>Lista de eventos aqui..</h1>"
    ""


if __name__ == "__main__":
    app.run(debug=True)


