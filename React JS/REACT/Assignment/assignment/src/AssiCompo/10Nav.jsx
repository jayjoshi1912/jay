import React, { Component } from 'react';
import {
    BrowserRouter as Router,
    Routes,
    Route,
    Link,
  } from "react-router-dom";
  import Counter from './Counter';

class Nav extends Component {
    render() {

        const data={'/counter':'Counter'}
        const Alldata=Object.entries(data).map((res)=>{
            console.log(res);
            return  <li className="nav-item">
            <Link className="nav-link" to={res[0]}>{res[1]}</Link>
          </li>
            
        })
        return (
            <>
     <Router>         
<nav className="navbar navbar-expand-sm bg-dark navbar-dark">
  <div className="container-fluid">
    <a className="navbar-brand" href="#">Logo</a>
    <button className="navbar-toggler" type="button" data-bs-toggle="collapse" data-bs-target="#collapsibleNavbar">
      <span className="navbar-toggler-icon"></span>
    </button>
    <div className="collapse navbar-collapse" id="collapsibleNavbar">
      <ul className="navbar-nav">
        {Alldata}
      </ul>
    </div>
  </div>
</nav>

<Routes>
    <Route path='/Counter' element={<Counter/>}></Route>
</Routes>

</Router>


            </>
        );
    }
}

export default Nav;